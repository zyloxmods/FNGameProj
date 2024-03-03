#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TokenAttributePair.h"
#include "FortTokenToAttributeTable.generated.h"

UCLASS(Blueprintable)
class UFortTokenToAttributeTable : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTokenAttributePair> TokenToAttributeList;
    
public:
    UFortTokenToAttributeTable();
};

