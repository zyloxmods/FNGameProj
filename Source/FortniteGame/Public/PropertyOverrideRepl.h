#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PropertyOverrideId.h"
#include "PropertyOverrideRepl.generated.h"

USTRUCT(BlueprintType)
struct FPropertyOverrideRepl : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    FPropertyOverrideId PropertyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PropertyScopedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PropertyData;
    
    FORTNITEGAME_API FPropertyOverrideRepl();
};

