#include "KeyValue.h"

KeyValue::KeyValue(int k, double v)
{
	key = k;
	value = v;
	next = nullptr;
}

KeyValue::~KeyValue()
{
	delete next;
}

int KeyValue::GetKey()
{
	return key;
}

double KeyValue::GetValue()
{
	return value;
}

KeyValue* KeyValue::GetNext()
{
	return next;
}

KeyValue* KeyValue::CreateNext(int k, double v)
{
	next = new KeyValue(k, v);
	return next;
}
