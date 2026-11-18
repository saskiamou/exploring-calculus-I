cmake_minimum_required(VERSION 3.23)
project(Related)
add_executable(Related)


# private - this property belongs to
# this program & not inheritable
target_sources(Related
    PRIVATE
        RelatedRates.cpp
)