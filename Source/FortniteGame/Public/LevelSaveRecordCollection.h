#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelSaveRecordCollectionItem.h"
#include "LevelSaveRecordCollection.generated.h"

UCLASS(Blueprintable)
class ULevelSaveRecordCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelSaveRecordCollectionItem> Items;
    
    ULevelSaveRecordCollection();
};

