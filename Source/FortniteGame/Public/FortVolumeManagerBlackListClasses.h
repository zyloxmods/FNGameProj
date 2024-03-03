#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortVolumeManagerBlackListClasses.generated.h"

USTRUCT(BlueprintType)
struct FFortVolumeManagerBlackListClasses : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> ClassPath;
    
    FORTNITEGAME_API FFortVolumeManagerBlackListClasses();
};

