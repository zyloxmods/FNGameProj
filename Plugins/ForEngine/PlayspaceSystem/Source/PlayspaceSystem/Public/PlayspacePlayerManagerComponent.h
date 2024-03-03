#pragma once
#include "CoreMinimal.h"
#include "PlayspaceComponent.h"
#include "Templates/SubclassOf.h"
#include "PlayspacePlayerManagerComponent.generated.h"

class UControllerComponent;
class UPlayerStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYSPACESYSTEM_API UPlayspacePlayerManagerComponent : public UPlayspaceComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UControllerComponent>> ControllerComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPlayerStateComponent>> PlayerStateComponents;
    
public:
    UPlayspacePlayerManagerComponent();
};

