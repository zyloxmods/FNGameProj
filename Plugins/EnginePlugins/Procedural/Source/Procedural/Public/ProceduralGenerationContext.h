#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ProceduralGenerationContext.generated.h"

class AVolume;
class UProceduralGenerationComponent;
class UProceduralGeneratorContext;

UCLASS(Blueprintable)
class PROCEDURAL_API UProceduralGenerationContext : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProceduralGeneratorContext* GeneratorContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UProceduralGeneratorContext*> GeneratedContexts;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UProceduralGeneratorContext*> RegisteredContexts;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UProceduralGeneratorContext*> GeneratorContexts;
    
public:
    UProceduralGenerationContext();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVolume* GetGenerationVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UProceduralGenerationComponent* GetGenerationComponent() const;
    
};

