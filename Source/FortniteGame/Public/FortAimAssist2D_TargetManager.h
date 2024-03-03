#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FortAimAssist2D_TargetManager.generated.h"

class AActor;
class UShapeComponent;

UCLASS(Blueprintable)
class UFortAimAssist2D_TargetManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<AActor*, UShapeComponent*> TargetMap;
    
public:
    UFortAimAssist2D_TargetManager();
    UFUNCTION(BlueprintCallable)
    static void UnregisterAimAssistTarget(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterAimAssistTarget(AActor* TargetActor, UShapeComponent* TargetShapeComponent);
    
};

