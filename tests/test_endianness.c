
#include "../unity/unity.h"

uint16_t endianness_change_16(uint16_t n);
uint32_t endianness_change_32(uint32_t n);
uint64_t endianness_change_64(uint64_t n);

void test_endianness_change_16_should_swap_bytes(void)
{
	TEST_ASSERT_EQUAL_HEX16(0x2301, endianness_change_16(0x0123));
}

void test_endianness_change_32_should_swap_bytes(void)
{
	TEST_ASSERT_EQUAL_HEX32(0x23010000, endianness_change_32(0x0123));
	TEST_ASSERT_EQUAL_HEX32(0x67452301, endianness_change_32(0x01234567));
}

void test_endianness_change_64_should_swap_bytes(void)
{
	TEST_ASSERT_EQUAL_HEX64(0x2301000000000000, endianness_change_64(0x0123));
	TEST_ASSERT_EQUAL_HEX64(0x6745230100000000, endianness_change_64(0x01234567));
	TEST_ASSERT_EQUAL_HEX64(0xEFCDAB8967452301, endianness_change_64(0x0123456789ABCDEF));
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_endianness_change_16_should_swap_bytes);
	RUN_TEST(test_endianness_change_32_should_swap_bytes);
	RUN_TEST(test_endianness_change_64_should_swap_bytes);
	return UNITY_END();
}
