// ESI_Parse.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "tinyxml2.h"
#include <iostream>
#include <string>

using namespace std;
using namespace tinyxml2;


#define XMLPATH "E:/VSEtherCAT/ESI_Parse/ESI/DM3E_V1.70_Example.xml"

bool getXMLDeclaration(const char* xpath,string& declaration){
	
	XMLDocument doc;
	if (doc.LoadFile(xpath))
	{
		cout << "load xml file failed" << endl;
		return false;
	}
	XMLNode* dec = doc.FirstChild();
	if (dec)
	{
		XMLDeclaration* decl = dec->ToDeclaration();
		if (decl)
		{
			declaration = decl->Value();
			return true;
		}
	}
	return false;
}


int Parse_ESI(const char* xmlpath) {
	XMLDocument doc;
	if (doc.LoadFile(xmlpath))
	{
		cout << "load xml file failed" << endl;
		return doc.ErrorID();
	}
	XMLElement* EtherCATInfo = doc.RootElement();
	if (EtherCATInfo)
	{
		const XMLAttribute* attribute;
		const char* TXTcontent;
		XMLElement* First = EtherCATInfo->FirstChildElement();//找到第一个一级节点
		while (First)
		{
			attribute = First->FirstAttribute();//得到一级节点的第一个属性
			while (attribute)
			{
				cout << attribute->Name() << " = " << attribute->Value() << endl;//显示属性名称和值
				attribute = attribute->Next();//指向下一个属性
			}
			TXTcontent = First->GetText();//得到元素的文本内容
			if (TXTcontent)
			{
				cout << TXTcontent << endl;
			}
			XMLElement* Second = First->FirstChildElement();//得到Vendor节点下的第一个子元素
			while (Second)
			{
				attribute = Second->FirstAttribute();
				while (attribute)
				{
					cout << attribute->Name() << " = " << attribute->Value() << endl;//显示属性名称和值
					attribute = attribute->Next();//指向下一个属性
				}
				TXTcontent = Second->GetText();
				if (TXTcontent)
				{
					cout << TXTcontent << endl;
				}
				XMLElement* Third = Second->FirstChildElement();
				while (Third)
				{
					attribute = Third->FirstAttribute();
					while (attribute)
					{
						cout << attribute->Name() << " = " << attribute->Value() << endl;//显示属性名称和值
						attribute = attribute->Next();//指向下一个属性
					}
					TXTcontent = Third->GetText();
					if (TXTcontent)
					{
						cout << TXTcontent << endl;
					}
					XMLElement* Four = Third->FirstChildElement();
					while (Four)
					{
						attribute = Four->FirstAttribute();
						while (attribute)
						{
							cout << attribute->Name() << " = " << attribute->Value() << endl;//显示属性名称和值
							attribute = attribute->Next();//指向下一个属性
						}
						TXTcontent = Four->GetText();
						if (TXTcontent)
						{
							cout << TXTcontent << endl;
						}
						XMLElement* Five = Four->FirstChildElement();
						while (Five)
						{
							attribute = Five->FirstAttribute();
							while (attribute)
							{
								cout << attribute->Name() << " = " << attribute->Value() << endl;//显示属性名称和值
								attribute = attribute->Next();//指向下一个属性
							}
							TXTcontent = Five->GetText();
							if (TXTcontent)
							{
								cout << TXTcontent << endl;
							}
							XMLElement* Six = Five->FirstChildElement();
							while (Six)
							{
								attribute = Six->FirstAttribute();
								while (attribute)
								{
									cout << attribute->Name() << " = " << attribute->Value() << endl;//显示属性名称和值
									attribute = attribute->Next();//指向下一个属性
								}
								TXTcontent = Six->GetText();
								if (TXTcontent)
								{
									cout << TXTcontent << endl;
								}
								XMLElement* Seven = Six->FirstChildElement();
								while (Seven)
								{
									attribute = Seven->FirstAttribute();
									while (attribute)
									{
										cout << attribute->Name() << " = " << attribute->Value() << endl;//显示属性名称和值
										attribute = attribute->Next();//指向下一个属性
									}
									TXTcontent = Seven->GetText();
									if (TXTcontent)
									{
										cout << TXTcontent << endl;
									}
									XMLElement* Eight = Seven->FirstChildElement();
									while (Eight)
									{
										attribute = Eight->FirstAttribute();
										while (attribute)
										{
											cout << attribute->Name() << " = " << attribute->Value() << endl;//显示属性名称和值
											attribute = attribute->Next();//指向下一个属性
										}
										TXTcontent = Eight->GetText();
										if (TXTcontent)
										{
											cout << TXTcontent << endl;
										}
										XMLElement* Nine = Eight->FirstChildElement();
										while (Nine)
										{
											attribute = Nine->FirstAttribute();
											while (attribute)
											{
												cout << attribute->Name() << " = " << attribute->Value() << endl;//显示属性名称和值
												attribute = attribute->Next();//指向下一个属性
											}
											TXTcontent = Nine->GetText();
											if (TXTcontent)
											{
												cout << TXTcontent << endl;
											}
											XMLElement* Ten = Nine->FirstChildElement();
											while (Ten)
											{
												attribute = Ten->FirstAttribute();
												while (attribute)
												{
													cout << attribute->Name() << " = " << attribute->Value() << endl;//显示属性名称和值
													attribute = attribute->Next();//指向下一个属性
												}
												TXTcontent = Ten->GetText();
												if (TXTcontent)
												{
													cout << TXTcontent << endl;
												}
												XMLElement* Eleven = Ten->FirstChildElement();
												while (Eleven)
												{
													attribute = Eleven->FirstAttribute();
													while (attribute)
													{
														cout << attribute->Name() << " = " << attribute->Value() << endl;//显示属性名称和值
														attribute = attribute->Next();//指向下一个属性
													}
													TXTcontent = Eleven->GetText();
													if (TXTcontent)
													{
														cout << TXTcontent << endl;
													}
													XMLElement* Twelve = Eleven->FirstChildElement();
													while (Twelve)
													{
														attribute = Twelve->FirstAttribute();
														while (attribute)
														{
															cout << attribute->Name() << " = " << attribute->Value() << endl;//显示属性名称和值
															attribute = attribute->Next();//指向下一个属性
														}
														TXTcontent = Twelve->GetText();
														if (TXTcontent)
														{
															cout << TXTcontent << endl;
														}
														XMLElement* Thirteen = Twelve->FirstChildElement();
														while (Thirteen)
														{
															attribute = Thirteen->FirstAttribute();
															while (attribute)
															{
																cout << attribute->Name() << " = " << attribute->Value() << endl;//显示属性名称和值
																attribute = attribute->Next();//指向下一个属性
															}
															TXTcontent = Thirteen->GetText();
															if (TXTcontent)
															{
																cout << TXTcontent << endl;
															}
															Thirteen = Thirteen->NextSiblingElement();
														}
														Twelve = Twelve->NextSiblingElement();
													}
													Eleven = Eleven->NextSiblingElement();
												}
												Ten = Ten->NextSiblingElement();
											}
											Nine = Nine->FirstChildElement();
										}
										Eight = Eight->NextSiblingElement();
									}
									Seven = Seven->NextSiblingElement();
								}
								Six = Six->NextSiblingElement();
							}
							Five = Five->NextSiblingElement();
						}
						Four = Four->NextSiblingElement();
					}
					Third = Third->NextSiblingElement();
				}
				Second = Second->NextSiblingElement();//指向下一个兄弟节点
			}
			First = First->NextSiblingElement();//指向第一级下一个的兄弟节点
		}
	}
	else
	{
		cout << "bad xml file,please check it" << endl;
		return doc.ErrorID();
	}
	return doc.ErrorID();
}



int main()
{
	cout << Parse_ESI(XMLPATH) << endl;
	
	return 0;
}


