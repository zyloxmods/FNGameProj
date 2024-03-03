#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AthenaXPFeedWidgetEntry.generated.h"

class UAthenaXPFeedWidget;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaXPFeedWidgetEntry : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaXPFeedWidget* RelatedXPFeed;
    
    UAthenaXPFeedWidgetEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFastOutro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWidget(const int32& XpValue, const FText& DisplayName, bool bIsRested);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget();
    
};

