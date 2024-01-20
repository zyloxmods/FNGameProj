#pragma once
#include "CoreMinimal.h"
#include "NameplatePreset.h"
#include "NamedNameplatePreset.generated.h"

USTRUCT(BlueprintType)
struct FNamedNameplatePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNameplatePreset NameplatePreset;
    
    FORTNITEGAME_API FNamedNameplatePreset();
};

