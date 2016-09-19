/*
   Copyright 2010-2016 Intel Corporation

   This software is licensed to you in accordance
   with the agreement between you and Intel Corporation.

   Alternatively, you can use this file in compliance
   with the Apache license, Version 2.


   Apache License, Version 2.0

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef __SINGLETON_H
#define __SINGLETON_H

namespace intel_dal
{
	template<typename T>
	class Singleton
	{
		public:
			// Access to the Singleton Instance
			static T& Instance()
			{
				static T _instance;
				return _instance;
			}
		protected:
				Singleton() {}
		private:
			/*	Copy Constructor + assigment operator define as private to 
				prevent copy/cloning of the singelton object
			*/
			Singleton(const Singleton&);				// Copy Constructor operator
			Singleton& operator=(const Singleton&);		// assignment operator is private
			/** Singelton - END **/
	};

}



#endif