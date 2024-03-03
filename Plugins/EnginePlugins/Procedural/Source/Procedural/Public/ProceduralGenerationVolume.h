#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "ProceduralGenerationVolume.generated.h"

class UProceduralGenerationComponent;

UCLASS(Blueprintable)
class PROCEDURAL_API AProceduralGenerationVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralGenerationComponent* ProceduralComponent;
    
    AProceduralGenerationVolume();
    UFUNCTION(BlueprintCallable)
    void Generate();
    
    UFUNCTION(BlueprintCallable)
    void ClearGeneratedContent();
    
};

