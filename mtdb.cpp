#include <memory>
#include <function>

#include "mtdatabase.hpp"
#include "mtsqlite.hpp"
#include "mtmysql.hpp"
#include "mtpostgresql.hpp"

namespace mt
{
    class Connection;
}

class Connection
{
public:
    Connection(mt::IDatabase& db);
    std::function<void()> connect;
    std::function<void()> disconnect;

    std::function<bool()> isOpen;
    std::function<void(std::string& sql)> exec;
    std::function<std::shared_prt<IResult>()> result;

}

Connection::Connection(mt::IDatabase& db)
    : connect(db.connect), disconnect(db.disconnect),
    isOpen(db.isOpen), exec(b.exec), result(db.result)
{
}