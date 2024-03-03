#pragma once
#include "CoreMinimal.h"
#include "EPropertyOverrideTargetType.h"
#include "PropertyOverrideId.h"
#include "PropertyOverrideMk2.h"
#include "PropertyOverrideData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FPropertyOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FPropertyOverrideMk2> PropertyOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPropertyOverrideId> SharedPropertyIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPropertyOverrideId> PendingPropertyIds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPropertyOverrideTargetType OverrideMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* BaseObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UObject* MutableObject;
    
public:
    FORTNITEGAME_API FPropertyOverrideData();
};

