/*How do we count the number of items in each value held in a container?*/

template<typename T>
std::map<T,int> count_member(const std::vector<T> &vparam)
{	
	std::map<T, int> cmap;

	for (auto i : vparam)
		++cmap[i];
	return cmap;
}

template<typename T>
bool make_vector_unique_member(std::vector<T> &vec)
{
	if (vec.empty()) return false;

	std::set<T> s(vec.begin(), vec.end());
	vec.assign(s.begin(), s.end());
	return true;
}
