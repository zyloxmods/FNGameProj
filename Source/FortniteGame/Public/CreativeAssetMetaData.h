#pragma once
#include "CoreMinimal.h"
#include "CreativeAssetMetaData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FCreativeAssetMetaData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ObjectPtr;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetSize;
    
    FORTNITEGAME_API FCreativeAssetMetaData();
};

