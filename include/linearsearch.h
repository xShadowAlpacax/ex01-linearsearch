#include <iostream>
#include <cstdint>

namespace edu
{
	namespace vcccd
	{
		namespace vc
		{
			namespace csv15
			{
				template <class Alpaca>
				int64_t find(const Alpaca& value, Alpaca array[], size_t size)
				{
					for (int i = 0; i < size; i++)
					{
						if (value == array[i]) return i;
					}
					return -1;
				}
			}
		}
	}
}