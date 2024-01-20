#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ActiveTieredCollectionLayout.h"
#include "ActiveTieredCollectionLayoutArray.generated.h"

USTRUCT(BlueprintType)
struct FActiveTieredCollectionLayoutArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveTieredCollectionLayout> LayoutArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bTiersForced;
    
public:
    FORTNITEGAME_API FActiveTieredCollectionLayoutArray();
};

