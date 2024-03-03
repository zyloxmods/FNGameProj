#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortVolumeManagerBlackListObjects.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FFortVolumeManagerBlackListObjects : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ObjectPath;
    
    FORTNITEGAME_API FFortVolumeManagerBlackListObjects();
};

