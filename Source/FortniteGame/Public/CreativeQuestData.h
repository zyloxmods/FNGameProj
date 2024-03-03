#pragma once
#include "CoreMinimal.h"
#include "CreativeQuestData.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FCreativeQuestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    FORTNITEGAME_API FCreativeQuestData();
};

