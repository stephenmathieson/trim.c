
#include <stdio.h>
#include <string.h>
#include "trim.h"
#include "describe/describe.h"

describe("trim_right", {
  it("should not remove leading whitespace", {
    char str[] = "\t\n hello";
    assert_str_equal("\t\n hello", trim_right(str));
    assert_str_equal("\t\n hello", str);
  });

  it("should remove trailing whitespace", {
    char str[] = "hello \t\n";
    assert_str_equal("hello", trim_right(str));
    assert_str_equal("hello", str);
  });
});
