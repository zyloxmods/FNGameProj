#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CosmeticPreviewInterface.h"
#include "FortUICameraFrameTargetInterface.h"
#include "Templates/SubclassOf.h"
#include "FortLoadingScreenPreviewActor.generated.h"

class UAthenaLoadingScreenItemDefinition;
class UAthenaLoadingScreenPreviewPanel;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class AFortLoadingScreenPreviewActor : public AActor, public IFortUICameraFrameTargetInterface, public ICosmeticPreviewInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaLoadingScreenPreviewPanel> FullScreenPreviewWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaLoadingScreenItemDefinition* DisplayedLoadingScreen;
    
public:
    AFortLoadingScreenPreviewActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewLoadingScreen(const UAthenaLoadingScreenItemDefinition* LoadingScreen);
    
    
    // Fix for true pure virtual functions not being implemented
};

