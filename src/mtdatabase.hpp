#include <memory>
#include <string>

namespace mt
{
    class IDatabase;
    class IStatement;
    class IResult;
}

class IDatabase
{
public:
    virtual void connect() = 0;
    virtual void disconnect() = 0;
    virtual bool isOpen() = 0;
    virtual void exec(std::string& sql) = 0;
    virtual std::shared_prt<IResult> result() = 0;

}

