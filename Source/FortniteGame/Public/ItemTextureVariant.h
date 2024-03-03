#pragma once
#include "CoreMinimal.h"
#include "ItemTextureVariant.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FItemTextureVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> MaterialsToAlter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultSelectedItem;
    
    FORTNITEGAME_API FItemTextureVariant();
};

