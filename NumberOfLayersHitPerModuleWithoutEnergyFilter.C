{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 16 08:33:34 2016) by ROOT version5.34/25
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",258,226,1658,808);
   Canvas_1->Range(-0.625,-11922.88,5.625,107305.9);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1F *LayersHit = new TH1F("LayersHit","Straws Layers Hit Per Module",5,0,5);
   LayersHit->SetBinContent(1,90841);
   LayersHit->SetBinContent(2,2624);
   LayersHit->SetBinContent(3,7580);
   LayersHit->SetBinContent(4,24099);
   LayersHit->SetBinContent(5,27616);
   LayersHit->SetEntries(95475);
   LayersHit->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   LayersHit->SetLineColor(ci);
   LayersHit->GetXaxis()->SetTitle("Number of Layers Hit Per Module");
   LayersHit->GetXaxis()->SetNdivisions(6);
   LayersHit->GetXaxis()->SetLabelFont(42);
   LayersHit->GetXaxis()->SetLabelSize(0.035);
   LayersHit->GetXaxis()->SetTitleSize(0.035);
   LayersHit->GetXaxis()->SetTitleFont(42);
   LayersHit->GetYaxis()->SetTitle("Hits");
   LayersHit->GetYaxis()->SetLabelFont(42);
   LayersHit->GetYaxis()->SetLabelSize(0.035);
   LayersHit->GetYaxis()->SetTitleSize(0.035);
   LayersHit->GetYaxis()->SetTitleFont(42);
   LayersHit->GetZaxis()->SetLabelFont(42);
   LayersHit->GetZaxis()->SetLabelSize(0.035);
   LayersHit->GetZaxis()->SetTitleSize(0.035);
   LayersHit->GetZaxis()->SetTitleFont(42);
   LayersHit->Draw("");
   
   TPaveText *pt = new TPaveText(0.2793258,0.9348119,0.7206742,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Straws Layers Hit Per Module");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
