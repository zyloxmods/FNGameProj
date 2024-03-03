#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "FortClientAnnouncement.h"
#include "FortClientAnnouncementData_Basic.h"
#include "FortClientAnnouncement_Basic.generated.h"

UCLASS(Blueprintable)
class AFortClientAnnouncement_Basic : public AFortClientAnnouncement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BasicData, meta=(AllowPrivateAccess=true))
    FFortClientAnnouncementData_Basic BasicData;
    
    AFortClientAnnouncement_Basic();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTitleText(FText TitleText);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIcon(FSlateBrush& Icon);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDisplayTime(float DisplayTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDetailText(FText DetailText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BasicData(const FFortClientAnnouncementData_Basic& PreviousBasicData);
    
};

