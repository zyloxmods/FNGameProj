#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GameMemberInfo.h"
#include "GameMemberInfoArray.generated.h"

class AFortGameStateAthena;

USTRUCT(BlueprintType)
struct FGameMemberInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameMemberInfo> Members;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* OwningGameState;
    
public:
    FORTNITEGAME_API FGameMemberInfoArray();
};

