Usage:
1. Clone or download https://github.com/RolandXu/googletest.git
2. Switch to personalized branch
3. Go to folde googletest\cmake\googletest-distribution and find gtest.props
4. Add gtest.props to your VS project by
   Visual Studio -> View -> Property Manager -> (Right click) Add Existing Property Sheet -> (Select gtest.pros file)

Notes: Current build only include Debug version using Multi-threaded Debug DLL (/MDd) Runtime Library, you need build from oringal gtest source code if your project use different configration

Notes: You could copy googletest-distribution to anywhere you want. Just add gtest.props in your project, it will find the location of gtest