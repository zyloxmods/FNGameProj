#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "NamePlateFilter.generated.h"

USTRUCT(BlueprintType)
struct FNamePlateFilter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FUniqueNetIdRepl> NamePlatesToShow;
    
public:
    FORTNITEGAME_API FNamePlateFilter();
};

