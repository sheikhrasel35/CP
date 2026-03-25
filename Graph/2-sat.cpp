// template from YouKn0wWho
/*
zero Indexed
we have vars variables
F=(x_0 XXX y_0) and (x_1 XXX y_1) and ... (x_{vars-1} XXX y_{vars-1})
here {x_i,y_i} are variables
and XXX belongs to {OR,XOR}
is there any assignment of variables such that F=true
*/
struct twosat {
	int n;  // total size combining +, -. must be even.
	vector< vector<int> > g, gt;
	vector<bool> vis, res;
	vector<int> comp;
	stack<int> ts;
	twosat(int vars = 0) {
		n = vars << 1;
		g.resize(n);
		gt.resize(n);
	}