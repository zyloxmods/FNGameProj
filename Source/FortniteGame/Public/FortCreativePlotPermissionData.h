#pragma once
#include "CoreMinimal.h"
#include "EFortCreativePlotPermission.h"
#include "FortCreativePlotPermissionData.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativePlotPermissionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCreativePlotPermission Permission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> WhiteList;
    
    FORTNITEGAME_API FFortCreativePlotPermissionData();
};

