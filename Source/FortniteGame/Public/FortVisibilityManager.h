#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VisibiltyInfoArray.h"
#include "FortVisibilityManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API AFortVisibilityManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVisibiltyInfoArray VisibilityInfoArray;
    
public:
    AFortVisibilityManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

