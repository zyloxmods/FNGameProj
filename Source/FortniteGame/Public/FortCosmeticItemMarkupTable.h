#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortCosmeticItemMarkupTable.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UFortCosmeticItemMarkupTable : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> SetDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> MarkupTagDescriptions;
    
public:
    UFortCosmeticItemMarkupTable();
};

