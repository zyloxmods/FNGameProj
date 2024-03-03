#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "FortPostGameScreenContainer.generated.h"

class UFortPostGameScreen;

UCLASS(Blueprintable)
class UFortPostGameScreenContainer : public UWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScreenPreviewIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortPostGameScreen*> AllScreens;
    
public:
    UFortPostGameScreenContainer();
};

