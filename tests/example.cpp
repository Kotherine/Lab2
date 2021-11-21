// Copyright 2021 Your Name <your_email>

#include <stdexcept>

#include <gtest/gtest.h>

#include <investigation.hpp>

TEST(Example, EmptyTest) {
    EXPECT_THROW(Investigation(), std::runtime_error);
}
