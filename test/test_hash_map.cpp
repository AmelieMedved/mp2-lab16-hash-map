#include <gtest.h>
#include "hash_map.h"
#include "hash_map_list.h"

using namespace std;

TEST(THashMap, can_create_map)
{
  THashMap<string, int> a;
  EXPECT_EQ(0, a.GetCount());
}

TEST(THashMap, can_add_item_0)
{
  THashMap<string, int> a;
  a.Add("A0", 1);
  EXPECT_EQ(1, a["A0"]);
}

TEST(THashMapList, can_add_item_1)
{
  THashMapList<string, string> a;
  a.Add("A", "1");

  EXPECT_EQ("1", a["A"]);
}

TEST(THashMap, can_find_item_0)
{
  THashMap<string, int> a;
  a.Add("A", 1);
  a.Add("B", 2);
  a.Add("C", 3);

  EXPECT_EQ(2, a.Find("B"));
}

TEST(THashMapList, can_find_item_1)
{
  THashMapList<string, string> a;

  a.Add("A", "1");
  a.Add("B", "2");
  a.Add("C", "3");

  EXPECT_EQ("3", a.Find("C"));
}


TEST(THashMap, can_delete_item)
{
  THashMap<string, int> a;
  a.Add("A", 1);
  a.Add("B", 2);
  a.Add("C", 3);
  a.Add("D", 4);

  a.Delete("A");

  ASSERT_ANY_THROW(a.Find("A"));
}

TEST(THashMap, unexpected_indexation_wont_cause_error)
{
  THashMap<string, int> a;
  a.Add("A", 1);
  a.Add("B", 2);
  a.Add("C", 3);

  ASSERT_NO_THROW(a["E5"]);
}



