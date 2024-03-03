#pragma once
#include "CoreMinimal.h"
#include "AlertLevelInfo.generated.h"

class UAISenseConfig;

USTRUCT(BlueprintType)
struct FAlertLevelInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> SensesConfig;
    
public:
    FORTNITEGAME_API FAlertLevelInfo();
};

