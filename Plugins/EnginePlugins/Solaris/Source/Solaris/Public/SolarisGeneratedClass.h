#pragma once
#include "CoreMinimal.h"
#include "UObject/Class.h"
#include "SolarisGeneratedClass.generated.h"

UCLASS(Blueprintable)
class SOLARIS_API USolarisGeneratedClass : public UClass {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SolClassFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> CoroClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> TraitClasses;
    
    USolarisGeneratedClass();
};

