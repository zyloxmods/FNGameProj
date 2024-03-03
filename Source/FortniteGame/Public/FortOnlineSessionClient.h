#pragma once
#include "CoreMinimal.h"
#include "OnlineSessionClient.h"
#include "FortOnlineSessionClient.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortOnlineSessionClient : public UOnlineSessionClient {
    GENERATED_BODY()
public:
    UFortOnlineSessionClient();
};

