#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PropertyOverride.generated.h"

USTRUCT(BlueprintType)
struct FPropertyOverride : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PropertyScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PropertyData;
    
    FORTNITEGAME_API FPropertyOverride();
};

