#pragma once
#include "CoreMinimal.h"
#include "QuickBar.h"
#include "FortWorldPlayerLoadout.generated.h"

USTRUCT(BlueprintType)
struct FFortWorldPlayerLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerIsNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickBar PrimaryQuickBarRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickBar SecondaryQuickBarRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZonesCompleted;
    
    FORTNITEGAME_API FFortWorldPlayerLoadout();
};

