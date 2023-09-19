class BrazoRobotico {
	private:
		double x;
		double y;
		double z;
		bool sujetandoObjeto;
       	public:
		BrazoRobotico(double x, double y, double z);
		double getX();
		double getY();
		double getZ();
		bool getsujetandoObjeto();
		void coger();
		void soltar();
		void mover(double a, double b, double c);
};
