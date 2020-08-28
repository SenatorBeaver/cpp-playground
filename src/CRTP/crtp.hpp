#pragma once
namespace crtp
{
    template <class Derived>
    class Base
    {
    public:
        void interface()
        {
            static_cast<Derived *>(this)->implementation();
        }
    };

    class Derived : public Base<Derived>
    {
    private:
        void implementation();
        friend class Base<Derived>;
    };

    template <class Derived>
    class Cloneable
    {
    public:
        Derived *clone() const
        {
            return new Derived(static_cast<Derived const &>(*this));
        }
    };

    class ToClone : public Cloneable<ToClone>
    {
    public:
        char x;
    };

    namespace excercise
    {
        //Using CRTP write a base class that add a method
        // float profit(),
        template <class Derived>
        class CalcProfit
        {
        public:
            float getProfit()
            {
                const auto &obj = static_cast<const Derived &>(*this);
                return 42.0 * obj.output / obj.input;
            }
        };

        class Data : public CalcProfit<Data>
        {
        public:
            float input;
            float output;
        };
        void run();
    } // namespace excercise

} // namespace crtp