#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuickBarSlot.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FQuickBarSlot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    FQuickBarSlot();
};

