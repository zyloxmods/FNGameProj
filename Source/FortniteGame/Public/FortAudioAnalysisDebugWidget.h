#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortAudioAnalysisDebugWidget.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable, EditInlineNew)
class UFortAudioAnalysisDebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFortAudioAnalysisDebugWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMPCParameter(FName ParamName, UMaterialParameterCollection* Collection, int32 Vec4Index);
    
};

