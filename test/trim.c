
#include <stdio.h>
#include <string.h>
#include "trim.h"
#include "describe/describe.h"

describe("trim", {
  it("should remove leading whitespace", {
    char str[] = "\t\n hello";
    assert_str_equal("hello", trim(str));
    assert_str_equal("hello", str);
  });

  it("should remove trailing whitespace", {
    char str[] = "hello \t\n";
    assert_str_equal("hello", trim(str));
    assert_str_equal("hello", str);
  });

  it("should remove leading and trailing whitespace", {
    char str[] = " \n\t hello \n\t ";
    assert_str_equal("hello", trim(str));
    assert_str_equal("hello", str);
  });
});
