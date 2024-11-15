#pragma once

#ifdef VANNIE_EXPORTS
#define VANNIE_API __declspec(dllexport)
#else
#define VANNIE_API __declspec(dllimport)
#endif