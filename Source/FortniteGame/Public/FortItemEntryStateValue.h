#pragma once
#include "CoreMinimal.h"
#include "EFortItemEntryState.h"
#include "FortItemEntryStateValue.generated.h"

USTRUCT(BlueprintType)
struct FFortItemEntryStateValue {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 IntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName NameValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortItemEntryState StateType;
    
public:
    FORTNITEGAME_API FFortItemEntryStateValue();
};

