#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortCosmeticItemFilterTable.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UFortCosmeticItemFilterTable : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> FilterTagTables;
    
public:
    UFortCosmeticItemFilterTable();
};

