#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProceduralGeneratorContext.generated.h"

class UProceduralGenerationContext;
class UProceduralGenerator;
class UProceduralGeneratorContext;
class UProceduralPointCloud;

UCLASS(Abstract, Blueprintable)
class PROCEDURAL_API UProceduralGeneratorContext : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProceduralGenerator* Generator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UProceduralGenerationContext* GenerationContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UProceduralGeneratorContext* OwnerContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> GeneratedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UProceduralPointCloud* ExportedPointCloud;
    
public:
    UProceduralGeneratorContext();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnGenerate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDrawVisualization() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClearGeneratedContent();
    
    UFUNCTION(BlueprintCallable)
    void GetOrCreateGeneratorContext(UProceduralGenerator* NewGenerator, UProceduralGeneratorContext*& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UProceduralGeneratorContext*> GetGeneratedContexts() const;
    
    UFUNCTION(BlueprintCallable)
    bool Generate();
    
    UFUNCTION(BlueprintCallable)
    void ClearGeneratedContent();
    
};

