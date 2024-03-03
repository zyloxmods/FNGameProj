#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ActiveTieredCollectionLayout.generated.h"

class UFortTieredCollectionLayout;

USTRUCT(BlueprintType)
struct FActiveTieredCollectionLayout : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortTieredCollectionLayout* Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxTierUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bLocked: 1;
    
    FORTNITEGAME_API FActiveTieredCollectionLayout();
};

